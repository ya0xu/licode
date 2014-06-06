#ifndef BUILDING_NODE_EXTENSION
#define BUILDING_NODE_EXTENSION
#endif
#include <node.h>
#include "WebRtcConnection.h"
#include "OneToManyProcessor.h"
#include "OneToManyTranscoder.h"
#include "ExternalInput.h"
#include "ExternalOutput.h"
#include "RtpSink.h"
#include "RtpSource.h"

using namespace v8;

void InitAll(Handle<Object> target) {
  WebRtcConnection::Init(target);
  OneToManyProcessor::Init(target);
  OneToManyTranscoder::Init(target);
  ExternalInput::Init(target);
  ExternalOutput::Init(target);
  RtpSink::Init(target);
  RtpSource::Init(target);
}

NODE_MODULE(addon, InitAll)