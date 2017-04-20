/* Generated by RuntimeBrowser.
 */

@protocol WLKUIMediaPlayerLibraryExport <JSExport>

@required

- (NSDictionary *)findItemByStoreIdentifier:(NSNumber *)arg1 :(NSArray *)arg2;
- (void)getImageForItem:(NSString *)arg1 :(NSDictionary *)arg2 :(JSValue *)arg3;
- (BOOL)getIsInitialImport;
- (BOOL)getIsUpdateInProgress;
- (NSDictionary *)getItem:(NSString *)arg1 :(NSArray *)arg2;
- (unsigned int)getItemCount;
- (NSDictionary *)getItemWithChildren:(NSString *)arg1 :(NSArray *)arg2;
- (NSArray *)getItems;
- (void)getUpdateProgress:(JSValue *)arg1;
- (BOOL)libraryHasMedia;
- (int)queryHasItemCount:(NSString *)arg1;
- (BOOL)setFilter:(NSDictionary *)arg1;

@end