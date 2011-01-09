/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSString;



@interface PCDistributedLock : NSObject <NSLocking>
{
    NSString *_path;
    NSInteger _fd;
}


- (BOOL)_lockBlocking:(BOOL)arg1;
- (id)initWithPath:(id)arg1;
- (void)lock;
- (void)unlock;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (BOOL)tryLock;

@end