/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@class NSString;

@interface APDSearchResultItem : APDGenericData <NSCopying> {
    NSString *_identifier;
    int _matchCount;
    int _weight;
}

@property(retain) NSString * identifier;
@property int matchCount;
@property int weight;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (int)matchCount;
- (void)setIdentifier:(id)arg1;
- (void)setMatchCount:(int)arg1;
- (void)setWeight:(int)arg1;
- (int)weight;

@end