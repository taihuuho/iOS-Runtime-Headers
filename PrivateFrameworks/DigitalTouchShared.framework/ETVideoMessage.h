/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETVideoMessage : ETMessage {
    double  _compressedTimeLastEventTime;
    double  _compressedTimeTotal;
    ETSketchMessage * _introMessage;
    unsigned int  _mediaType;
    NSURL * _mediaURL;
    double  _messageDuration;
    BOOL  _pauseTimeCompression;
    NSMutableArray * _playingMessages;
    UIImage * _stillImage;
}

@property (nonatomic, readonly) BOOL canCompressTime;
@property (nonatomic, retain) ETSketchMessage *introMessage;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic, retain) NSURL *mediaURL;
@property (nonatomic) BOOL pauseTimeCompression;
@property (nonatomic, retain) NSArray *playingMessages;
@property (nonatomic, retain) UIImage *stillImage;

+ (unsigned short)messageType;

- (void).cxx_destruct;
- (int)_etpMediaTypeFromETMediaType:(unsigned int)arg1;
- (unsigned int)_mediaTypeFromETPVideoType:(int)arg1;
- (id)archiveData;
- (BOOL)canCompressTime;
- (double)compressTimeSinceStartOfMessage:(double)arg1;
- (id)init;
- (id)initWithArchiveData:(id)arg1;
- (id)introMessage;
- (BOOL)isAnimated;
- (unsigned int)mediaType;
- (id)mediaURL;
- (double)messageDuration;
- (id)messageTypeAsString;
- (BOOL)pauseTimeCompression;
- (id)playingMessages;
- (void)setIntroMessage:(id)arg1;
- (void)setMediaType:(unsigned int)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setPauseTimeCompression:(BOOL)arg1;
- (void)setPlayingMessages:(id)arg1;
- (void)setStillImage:(id)arg1;
- (BOOL)shouldLoopDuringPlayback;
- (id)stillImage;

@end
