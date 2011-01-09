/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableDictionary, NSLock;



@interface SSDownloadMetadata : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary *_dictionary;
    NSLock *_lock;
}

@property(retain) NSString *genre;
@property unsigned long long itemIdentifier;
@property(retain) NSString *kind;
@property(retain) NSString *subtitle;
@property(retain) NSString *title;
@property(retain) NSURL *thumbnailImageURL;
@property(retain) NSString *transactionIdentifier;
@property(retain) NSString *collectionName;
@property(retain) NSNumber *durationInMilliseconds;
@property(getter=isRental) BOOL rental;
@property(readonly) NSString *applicationIdentifier;
@property BOOL artworkIsPrerendered;
@property(retain) NSString *bundleIdentifier;
@property(getter=isSample) BOOL sample;
@property(retain) NSString *copyright;
@property(retain) NSDictionary *dictionary;
@property(retain) NSString *downloadKey;
@property(retain) NSData *epubRightsData;
@property(retain) NSString *fileExtension;
@property unsigned long long preOrderIdentifier;
@property(retain) NSString *releaseDateString;
@property BOOL shouldDownloadAutomatically;
@property(retain) NSString *sortArtistName;
@property(retain) NSString *sortCollectionName;
@property(retain) NSString *sortTitle;
@property(retain) NSArray *sinfs;


- (void)setDurationInMilliseconds:(id)arg1;
- (id)durationInMilliseconds;
- (id)fileExtension;
- (id)sortTitle;
- (id)genre;
- (BOOL)isRental;
- (id)copyright;
- (id)initWithItem:(id)arg1;
- (id)_valueForFirstAvailableKey:(id)arg1;
- (id)collectionName;
- (void)setCollectionName:(id)arg1;
- (void)setArtworkIsPrerendered:(BOOL)arg1;
- (void)setPreOrderIdentifier:(unsigned long long)arg1;
- (unsigned long long)itemIdentifier;
- (void)setThumbnailImageURL:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
- (void)setCopyright:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setKind:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (id)applicationIdentifier;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)title;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)dictionary;
- (id)bundleIdentifier;
- (void)setTitle:(id)arg1;
- (id)kind;
- (id)initWithKind:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (BOOL)shouldDownloadAutomatically;
- (BOOL)artworkIsPrerendered;
- (void)setGenre:(id)arg1;
- (void)setRental:(BOOL)arg1;
- (void)setSample:(BOOL)arg1;
- (void)setSortArtistName:(id)arg1;
- (void)setSortCollectionName:(id)arg1;
- (void)setSortTitle:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (id)sortArtistName;
- (id)sortCollectionName;
- (id)transactionIdentifier;
- (id)epubRightsData;
- (id)releaseDateString;
- (void)setDownloadKey:(id)arg1;
- (void)setEpubRightsData:(id)arg1;
- (void)setFileExtension:(id)arg1;
- (void)setReleaseDateString:(id)arg1;
- (void)setShouldDownloadAutomatically:(BOOL)arg1;
- (void)setSinfs:(id)arg1;
- (BOOL)isSample;
- (id)downloadKey;
- (id)sinfs;
- (id)thumbnailImageURL;
- (unsigned long long)preOrderIdentifier;

@end