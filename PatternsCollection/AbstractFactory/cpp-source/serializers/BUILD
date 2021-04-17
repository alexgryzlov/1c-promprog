prefix = "//AbstractFactory/cpp-source/"
cc_library(
        name = "serializers",
        srcs = [
            "RoomSerializer.cpp",
            "GameSerializer.cpp",
        ],
        hdrs = [
            "RoomSerializer.h",
            "GameSerializer.h"
        ],
        deps = [
                prefix + "rooms:isaac_rooms"
        ],
        copts = ["-IAbstractFactory/cpp-source/rooms"],
        visibility = ["//visibility:public"]
)
