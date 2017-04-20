/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJob : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSNumber * _externalOrderKey;
    NSError * _failureError;
    NSNumber * _orderKey;
    double  _percentComplete;
    long long  _persistentID;
    int  _phase;
    long long  _purchaseID;
    long long  _storeItemID;
    int  _type;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSNumber *externalOrderKey;
@property (nonatomic, copy) NSError *failureError;
@property (nonatomic, copy) NSNumber *orderKey;
@property (nonatomic) double percentComplete;
@property (nonatomic) long long persistentID;
@property (nonatomic) int phase;
@property (nonatomic) long long purchaseID;
@property (nonatomic) long long storeItemID;
@property (nonatomic) int type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalOrderKey;
- (id)failureError;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)orderKey;
- (double)percentComplete;
- (long long)persistentID;
- (int)phase;
- (long long)purchaseID;
- (void)setBundleID:(id)arg1;
- (void)setExternalOrderKey:(id)arg1;
- (void)setFailureError:(id)arg1;
- (void)setOrderKey:(id)arg1;
- (void)setPercentComplete:(double)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPhase:(int)arg1;
- (void)setPurchaseID:(long long)arg1;
- (void)setStoreItemID:(long long)arg1;
- (void)setType:(int)arg1;
- (long long)storeItemID;
- (int)type;

@end