/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSuggestedSearchResultsData : NSObject {
    NSString * _displaySubtitle;
    NSString * _displayTitle;
    NSString * _searchString;
    NSArray * _uuids;
}

@property (nonatomic, copy) NSString *displaySubtitle;
@property (nonatomic, copy) NSString *displayTitle;
@property (nonatomic, copy) NSString *searchString;
@property (nonatomic, retain) NSArray *uuids;

- (void).cxx_destruct;
- (id)displaySubtitle;
- (id)displayTitle;
- (id)searchString;
- (void)setDisplaySubtitle:(id)arg1;
- (void)setDisplayTitle:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setUuids:(id)arg1;
- (id)uuids;

@end
