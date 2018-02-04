/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDHours : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _days;
    struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _timeRanges;
    unsigned long long  _timeRangesCount;
    unsigned long long  _timeRangesSpace;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*days;
@property (nonatomic, readonly) unsigned long long daysCount;
@property (nonatomic, readonly) struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*timeRanges;
@property (nonatomic, readonly) unsigned long long timeRangesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)_allHoursForPlaceData:(id)arg1;
+ (id)completeOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (bool)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (id)currentOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (bool)operatingHoursAvailableForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsDays:(id)arg1;
- (void)addDay:(int)arg1;
- (void)addTimeRange:(struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearDays;
- (void)clearTimeRanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dayAtIndex:(unsigned long long)arg1;
- (int*)days;
- (id)daysAsString:(int)arg1;
- (unsigned long long)daysCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDays:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTimeRanges:(struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })timeRangeAtIndex:(unsigned long long)arg1;
- (struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)timeRanges;
- (unsigned long long)timeRangesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end