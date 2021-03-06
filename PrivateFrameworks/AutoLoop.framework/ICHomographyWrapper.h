/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface ICHomographyWrapper : NSObject {
    struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; } * homographies;
}

@property (readonly) struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; /* Warning: unhandled struct encoding: '{__compressed_pair<HomographyInfoRecord **' */ struct x3; }*homographies; /* unknown property attribute:  std::__1::allocator<HomographyInfoRecord *> >=^^{HomographyInfoRecord}}} */

+ (id)homographyWrapperWithHomographyRecordVector:(struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; }*)arg1;

- (void)dealloc;
- (struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; }*)homographies;
- (id)initWithHomographyRecordVector:(struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; }*)arg1;

@end
