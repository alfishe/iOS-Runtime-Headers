/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSURL, YTVideo, NSString;

@interface YTCaptionTrack : NSObject  {
    YTVideo *_video;
    NSString *_title;
    NSString *_language;
    NSURL *_captionTrackURL;
    BOOL _speechRecognition;
}

@property(retain) YTVideo * video;
@property(retain) NSString * title;
@property(retain) NSString * language;
@property(retain) NSURL * captionTrackURL;
@property BOOL speechRecognition;


- (void)setLanguage:(id)arg1;
- (id)language;
- (id)description;
- (void)dealloc;
- (void)setVideo:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)speechRecognition;
- (id)captionTrackURL;
- (void)setSpeechRecognition:(BOOL)arg1;
- (void)setCaptionTrackURL:(id)arg1;
- (id)video;

@end
