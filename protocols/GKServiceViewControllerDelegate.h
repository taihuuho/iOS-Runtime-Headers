/* Generated by RuntimeBrowser.
 */

@protocol GKServiceViewControllerDelegate <NSObject>

@required

- (GKGame *)game;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (void)setGame:(GKGame *)arg1;

@optional

- (void)performActivityType:(NSString *)arg1 withActivityItemsAndSharingInfo:(NSDictionary *)arg2;

@end
