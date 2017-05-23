# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from adhoc_communication/EmAuction.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class EmAuction(genpy.Message):
  _md5sum = "942c2474214e04f260e8c0832e6a1dad"
  _type = "adhoc_communication/EmAuction"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint32 auction
uint32 robot
uint32 docking_station
float32 bid
"""
  __slots__ = ['auction','robot','docking_station','bid']
  _slot_types = ['uint32','uint32','uint32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       auction,robot,docking_station,bid

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EmAuction, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.auction is None:
        self.auction = 0
      if self.robot is None:
        self.robot = 0
      if self.docking_station is None:
        self.docking_station = 0
      if self.bid is None:
        self.bid = 0.
    else:
      self.auction = 0
      self.robot = 0
      self.docking_station = 0
      self.bid = 0.

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
      _x = self
      buff.write(_get_struct_3If().pack(_x.auction, _x.robot, _x.docking_station, _x.bid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 16
      (_x.auction, _x.robot, _x.docking_station, _x.bid,) = _get_struct_3If().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_3If().pack(_x.auction, _x.robot, _x.docking_station, _x.bid))
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
      _x = self
      start = end
      end += 16
      (_x.auction, _x.robot, _x.docking_station, _x.bid,) = _get_struct_3If().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3If = None
def _get_struct_3If():
    global _struct_3If
    if _struct_3If is None:
        _struct_3If = struct.Struct("<3If")
    return _struct_3If
