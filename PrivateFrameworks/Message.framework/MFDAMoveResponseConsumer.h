/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableSet, MFError, NSSet, NSMutableDictionary;

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {
    NSSet *_messagesIDs;
    NSMutableDictionary *_newRemoteIDsByMessageID;
    NSMutableSet *_failures;
    MFError *_error;
}

@property(retain) MFError * error;


- (void)setError:(id)arg1;
- (void)dealloc;
- (void)resultsForMessageMove:(id)arg1;
- (void)taskFailed:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (id)initWithMessageIDs:(id)arg1 newRemoteIDsByMessageID:(id)arg2 failures:(id)arg3;
- (id)error;

@end
