from construct import *
from construct.lib import *

imports_abs_rel = Struct(
	'one' / Int8ub,
	'two' / LazyBound(lambda: imported_and_rel),
)

_schema = imports_abs_rel
