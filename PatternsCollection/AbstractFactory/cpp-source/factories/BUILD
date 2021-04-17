prefix = "//AbstractFactory/cpp-source/"
cc_library(
        name = 'isaac_factories',
        srcs = [
            "BasementFactory.cpp",
            "CavesFactory.cpp",
            "RoomFactory.cpp"
        ],
        hdrs = [
            "BasementFactory.h",
            "CavesFactory.h",
            "RoomFactory.h"
        ],
        deps = [prefix + "rooms:isaac_rooms"],
        visibility = ["//visibility:public"]
)
