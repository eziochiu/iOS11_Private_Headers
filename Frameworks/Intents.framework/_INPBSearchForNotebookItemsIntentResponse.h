/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForNotebookItemsIntentResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int sortType : 1; 
    }  _has;
    NSMutableArray * _notes;
    int  _sortType;
    NSMutableArray * _taskLists;
    NSMutableArray * _tasks;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasSortType;
@property (nonatomic, retain) NSMutableArray *notes;
@property (nonatomic) int sortType;
@property (nonatomic, retain) NSMutableArray *taskLists;
@property (nonatomic, retain) NSMutableArray *tasks;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)notesType;
+ (id)options;
+ (Class)taskListsType;
+ (Class)tasksType;

- (void).cxx_destruct;
- (int)StringAsSortType:(id)arg1;
- (void)addNotes:(id)arg1;
- (void)addTaskLists:(id)arg1;
- (void)addTasks:(id)arg1;
- (void)clearNotes;
- (void)clearTaskLists;
- (void)clearTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSortType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notes;
- (id)notesAtIndex:(unsigned long long)arg1;
- (unsigned long long)notesCount;
- (bool)readFrom:(id)arg1;
- (void)setHasSortType:(bool)arg1;
- (void)setNotes:(id)arg1;
- (void)setSortType:(int)arg1;
- (void)setTaskLists:(id)arg1;
- (void)setTasks:(id)arg1;
- (int)sortType;
- (id)sortTypeAsString:(int)arg1;
- (id)taskLists;
- (id)taskListsAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskListsCount;
- (id)tasks;
- (id)tasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tasksCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
