/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationScheduledTransitLinkSummary : PBCodable <NSCopying> {
    struct { 
        unsigned int lineID : 1; 
        unsigned int scheduledArrival : 1; 
        unsigned int scheduledDeparture : 1; 
    }  _has;
    unsigned long long  _lineID;
    double  _scheduledArrival;
    double  _scheduledDeparture;
    GEONavigationTransitStopSummary * _stopFrom;
    GEONavigationTransitStopSummary * _stopTo;
}

@property (nonatomic) bool hasLineID;
@property (nonatomic) bool hasScheduledArrival;
@property (nonatomic) bool hasScheduledDeparture;
@property (nonatomic, readonly) bool hasStopFrom;
@property (nonatomic, readonly) bool hasStopTo;
@property (nonatomic) unsigned long long lineID;
@property (nonatomic) double scheduledArrival;
@property (nonatomic) double scheduledDeparture;
@property (nonatomic, retain) GEONavigationTransitStopSummary *stopFrom;
@property (nonatomic, retain) GEONavigationTransitStopSummary *stopTo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLineID;
- (bool)hasScheduledArrival;
- (bool)hasScheduledDeparture;
- (bool)hasStopFrom;
- (bool)hasStopTo;
- (unsigned long long)hash;
- (id)initWithTransitTripRouteStep:(id)arg1 originSummary:(id)arg2 destinationSummary:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lineID;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)scheduledArrival;
- (double)scheduledDeparture;
- (void)setHasLineID:(bool)arg1;
- (void)setHasScheduledArrival:(bool)arg1;
- (void)setHasScheduledDeparture:(bool)arg1;
- (void)setLineID:(unsigned long long)arg1;
- (void)setScheduledArrival:(double)arg1;
- (void)setScheduledDeparture:(double)arg1;
- (void)setStopFrom:(id)arg1;
- (void)setStopTo:(id)arg1;
- (id)stopFrom;
- (id)stopTo;
- (void)writeTo:(id)arg1;

@end