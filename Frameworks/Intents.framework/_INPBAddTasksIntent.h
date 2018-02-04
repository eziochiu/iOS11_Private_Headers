/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAddTasksIntent : PBCodable <NSCopying> {
    _INPBIntentMetadata * _intentMetadata;
    _INPBSpatialEventTrigger * _spatialEventTrigger;
    _INPBTaskList * _targetTaskList;
    NSMutableArray * _taskTitles;
    _INPBTemporalEventTrigger * _temporalEventTrigger;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSpatialEventTrigger;
@property (nonatomic, readonly) bool hasTargetTaskList;
@property (nonatomic, readonly) bool hasTemporalEventTrigger;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic, retain) _INPBTaskList *targetTaskList;
@property (nonatomic, retain) NSMutableArray *taskTitles;
@property (nonatomic, retain) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)taskTitlesType;

- (void).cxx_destruct;
- (void)addTaskTitles:(id)arg1;
- (void)clearTaskTitles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasSpatialEventTrigger;
- (bool)hasTargetTaskList;
- (bool)hasTemporalEventTrigger;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setTargetTaskList:(id)arg1;
- (void)setTaskTitles:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (id)spatialEventTrigger;
- (id)targetTaskList;
- (id)taskTitles;
- (id)taskTitlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskTitlesCount;
- (id)temporalEventTrigger;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end