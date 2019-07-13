#include "Video.h"
#include "VideoTodoBasics.h"

/// Create a new video, containing a sequence of frames copied from this video.
/// e.g. video.extract(2, 3) will copy the 3 frames (3rd, 4rd, 5th)
///
/// \param startPos is the position of first frame to be removed
/// \param length is the number of frames to be removed

// TODO: implement the extract function, go to Video.h to find its declaration
// Note: in implementation, you should check the range of first and last to avoid undefined behavior
// 1. if start position > position of last frame of video: no frame shall be copied, the return video contains nothing
//    e.g. videoOf5Frames.extract(7, 10)
// 2. if position of the last frame to be remove > position of the last frame of video, copy frames
//    from startPos to the end of the video








