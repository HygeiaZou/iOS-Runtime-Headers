/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKICSPreviewModel : NSObject {
    unsigned int  _actionsState;
    NSData * _data;
    EKEventStore * _destStore;
    NSMutableArray * _importedEvents;
    unsigned int  _options;
    BOOL  _shouldUpdate;
    EKEventStore * _tempStore;
    NSMutableArray * _unimportedEvents;
}

@property (nonatomic, readonly) unsigned int actionsState;
@property (nonatomic, readonly) NSArray *allEvents;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) unsigned int importedEventCount;
@property (nonatomic, readonly) NSArray *importedEvents;
@property (nonatomic, readonly) BOOL shouldUpdate;
@property (nonatomic, readonly) unsigned int totalEventCount;
@property (nonatomic, readonly) unsigned int unimportedEventCount;
@property (nonatomic, readonly) NSArray *unimportedEvents;

- (void).cxx_destruct;
- (unsigned int)actionsState;
- (id)allEvents;
- (id)eventStore;
- (id)importAllIntoCalendar:(id)arg1;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
- (unsigned int)importedEventCount;
- (id)importedEvents;
- (id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned int)arg3;
- (BOOL)shouldUpdate;
- (unsigned int)totalEventCount;
- (unsigned int)unimportedEventCount;
- (id)unimportedEvents;

@end
