#include "Video.h"
#include "VideoTodoBasics.h"

/// Concatenate two videos, so that the second video will be played immediately after the first video
/// the length of the the returned video is the sum of lengths of two videos
/// e.g. <video of lecture 1> + <video of lecture 2> + ... + <video of last lecture> = <video of this course>
/// usage: videoX = videoY + videoZ

// TODO: implement operator +
// Note: in this assignment, you are not required to check the width, height and frameRate of videos
template <typename Frame>
Video<Frame> Video<Frame>::operator+(const Video& nextVideo) const
{







}
