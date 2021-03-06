/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <OCDWriter>, OCDSummary, OADBlipCollection, OCDReader;

@interface OCDDocument : NSObject  {
    OCDReader *mReader;
    <OCDWriter> *mWriter;
    OCDSummary *mSummary;
    OADBlipCollection *mBlips;
}

@property(retain) OCDReader * reader;
@property(retain) <OCDWriter> * writer;
@property(readonly) OCDSummary * summary;
@property(readonly) OADBlipCollection * blips;


- (void)dealloc;
- (id)init;
- (id)summary;
- (void)setWriter:(id)arg1;
- (id)writer;
- (id)reader;
- (bool)isToBinaryFile;
- (bool)isFromBinaryFile;
- (void)setReader:(id)arg1;
- (id)blips;

@end
