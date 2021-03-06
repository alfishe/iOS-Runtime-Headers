/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableSet, NSString, NSArray, NSURL;

@interface MPItemDownloadProperties : NSObject <SSDownloadManagerObserver, NSCopying> {
    long long _assetFileSize;
    NSURL *_destinationURL;
    BOOL _downloadExists;
    NSString *_downloadIdentifier;
    long long _downloadSizeLimit;
    unsigned long long _downloadToken;
    NSMutableSet *_downloadTokenCompletionHandlers;
    NSArray *_sinfs;
    NSURL *_sourceURL;
}

@property(readonly) long long assetFileSize;
@property(readonly) NSURL * destinationURL;
@property(readonly) BOOL downloadExists;
@property(readonly) NSString * downloadIdentifier;
@property unsigned long long downloadToken;
@property(readonly) long long downloadSizeLimit;
@property(readonly) NSURL * sourceURL;


- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)setDownloadToken:(unsigned long long)arg1;
- (unsigned long long)downloadToken;
- (BOOL)downloadExists;
- (id)newAVAssetOptionsWithDownloadStyle:(int)arg1;
- (void)acquireDownloadTokenWithCompletionHandler:(id)arg1;
- (id)downloadIdentifier;
- (id)initWithDownloadIdentifier:(id)arg1;
- (id)initWithDownload:(id)arg1;
- (void)_reloadNetworkConstraints;
- (long long)downloadSizeLimit;
- (long long)assetFileSize;
- (id)initWithMediaItem:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)sourceURL;
- (id)destinationURL;

@end
