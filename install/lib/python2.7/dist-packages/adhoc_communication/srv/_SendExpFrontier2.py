# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from adhoc_communication/SendExpFrontier2Request.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import adhoc_communication.msg

class SendExpFrontier2Request(genpy.Message):
  _md5sum = "0a5a0643f3b393489d036b9bba8665ac"
  _type = "adhoc_communication/SendExpFrontier2Request"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string dst_robot
string topic
adhoc_communication/ExpFrontierElement frontier

================================================================================
MSG: adhoc_communication/ExpFrontierElement
int64 id
string detected_by_robot_str
int64 detected_by_robot
float64 robot_home_position_x
float64 robot_home_position_y
float64 x_coordinate
float64 y_coordinate
float64 bid
"""
  __slots__ = ['dst_robot','topic','frontier']
  _slot_types = ['string','string','adhoc_communication/ExpFrontierElement']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       dst_robot,topic,frontier

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SendExpFrontier2Request, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.dst_robot is None:
        self.dst_robot = ''
      if self.topic is None:
        self.topic = ''
      if self.frontier is None:
        self.frontier = adhoc_communication.msg.ExpFrontierElement()
    else:
      self.dst_robot = ''
      self.topic = ''
      self.frontier = adhoc_communication.msg.ExpFrontierElement()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.dst_robot
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.topic
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_q().pack(self.frontier.id))
      _x = self.frontier.detected_by_robot_str
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_q5d().pack(_x.frontier.detected_by_robot, _x.frontier.robot_home_position_x, _x.frontier.robot_home_position_y, _x.frontier.x_coordinate, _x.frontier.y_coordinate, _x.frontier.bid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.frontier is None:
        self.frontier = adhoc_communication.msg.ExpFrontierElement()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.dst_robot = str[start:end].decode('utf-8')
      else:
        self.dst_robot = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.topic = str[start:end].decode('utf-8')
      else:
        self.topic = str[start:end]
      start = end
      end += 8
      (self.frontier.id,) = _get_struct_q().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.frontier.detected_by_robot_str = str[start:end].decode('utf-8')
      else:
        self.frontier.detected_by_robot_str = str[start:end]
      _x = self
      start = end
      end += 48
      (_x.frontier.detected_by_robot, _x.frontier.robot_home_position_x, _x.frontier.robot_home_position_y, _x.frontier.x_coordinate, _x.frontier.y_coordinate, _x.frontier.bid,) = _get_struct_q5d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.dst_robot
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.topic
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_q().pack(self.frontier.id))
      _x = self.frontier.detected_by_robot_str
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_q5d().pack(_x.frontier.detected_by_robot, _x.frontier.robot_home_position_x, _x.frontier.robot_home_position_y, _x.frontier.x_coordinate, _x.frontier.y_coordinate, _x.frontier.bid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.frontier is None:
        self.frontier = adhoc_communication.msg.ExpFrontierElement()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.dst_robot = str[start:end].decode('utf-8')
      else:
        self.dst_robot = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.topic = str[start:end].decode('utf-8')
      else:
        self.topic = str[start:end]
      start = end
      end += 8
      (self.frontier.id,) = _get_struct_q().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.frontier.detected_by_robot_str = str[start:end].decode('utf-8')
      else:
        self.frontier.detected_by_robot_str = str[start:end]
      _x = self
      start = end
      end += 48
      (_x.frontier.detected_by_robot, _x.frontier.robot_home_position_x, _x.frontier.robot_home_position_y, _x.frontier.x_coordinate, _x.frontier.y_coordinate, _x.frontier.bid,) = _get_struct_q5d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_q = None
def _get_struct_q():
    global _struct_q
    if _struct_q is None:
        _struct_q = struct.Struct("<q")
    return _struct_q
_struct_q5d = None
def _get_struct_q5d():
    global _struct_q5d
    if _struct_q5d is None:
        _struct_q5d = struct.Struct("<q5d")
    return _struct_q5d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from adhoc_communication/SendExpFrontier2Response.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SendExpFrontier2Response(genpy.Message):
  _md5sum = "284aa12dd9e9e760802ac9f38036ea5e"
  _type = "adhoc_communication/SendExpFrontier2Response"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 status

"""
  __slots__ = ['status']
  _slot_types = ['uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       status

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SendExpFrontier2Response, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.status is None:
        self.status = 0
    else:
      self.status = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_get_struct_B().pack(self.status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.status,) = _get_struct_B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_B().pack(self.status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.status,) = _get_struct_B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class SendExpFrontier2(object):
  _type          = 'adhoc_communication/SendExpFrontier2'
  _md5sum = 'c95ef85b5ba5b536a769a25a3d571277'
  _request_class  = SendExpFrontier2Request
  _response_class = SendExpFrontier2Response