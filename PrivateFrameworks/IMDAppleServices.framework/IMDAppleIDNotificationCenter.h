/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

@class NSMutableArray;

@interface IMDAppleIDNotificationCenter : NSObject  {
    NSMutableArray *_availableNotifications;
    NSMutableArray *_usageNotifications;
}

+ (id)sharedInstance;

- (void)_noteNewUsageNotification:(id)arg1;
- (void)_noteNewAvailableNotification:(id)arg1;
- (void)_processUsageNotifications;
- (void)_processAvailableNotifications;
- (void)_postUsageNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 serviceTypes:(id)arg5;
- (void)_postAvailableNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 serviceTypes:(id)arg5;
- (void)addUsageNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 serviceType:(int)arg5;
- (void)addAvailableNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 serviceType:(int)arg5;
- (void)removeNotificationsForSession:(id)arg1;
- (void)dealloc;
- (id)init;

@end
