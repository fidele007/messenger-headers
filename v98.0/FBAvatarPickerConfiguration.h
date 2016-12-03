/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSPredicate;

@interface FBAvatarPickerConfiguration : FBValueObject <NSCopying, NSCoding> {

	BOOL _canTagSelf;
	BOOL _shouldShowSearchField;
	long long _style;
	NSString* _searchBarPlaceHolder;
	NSString* _searchBarA11yHint;
	NSArray* _taggableCollections;
	NSArray* _initialSelection;
	NSArray* _forcedSelection;
	NSArray* _disabledAvatars;
	NSArray* _sortDescriptors;
	NSPredicate* _predicate;
	unsigned long long _flags;
	long long _maxSelectionCount;
	NSString* _alertTitleForExceedingMaxSelectionCount;
	NSString* _alertMessageForExceedingMaxSelectionCount;

}

@property (nonatomic,readonly) long long style;                                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchBarPlaceHolder;                                   //@synthesize searchBarPlaceHolder=_searchBarPlaceHolder - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchBarA11yHint;                                      //@synthesize searchBarA11yHint=_searchBarA11yHint - In the implementation block
@property (nonatomic,copy,readonly) NSArray * taggableCollections;                                     //@synthesize taggableCollections=_taggableCollections - In the implementation block
@property (nonatomic,copy,readonly) NSArray * initialSelection;                                        //@synthesize initialSelection=_initialSelection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * forcedSelection;                                         //@synthesize forcedSelection=_forcedSelection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * disabledAvatars;                                         //@synthesize disabledAvatars=_disabledAvatars - In the implementation block
@property (nonatomic,readonly) BOOL canTagSelf;                                                        //@synthesize canTagSelf=_canTagSelf - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSearchField;                                             //@synthesize shouldShowSearchField=_shouldShowSearchField - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sortDescriptors;                                         //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * predicate;                                           //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) unsigned long long flags;                                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) long long maxSelectionCount;                                            //@synthesize maxSelectionCount=_maxSelectionCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertTitleForExceedingMaxSelectionCount;                //@synthesize alertTitleForExceedingMaxSelectionCount=_alertTitleForExceedingMaxSelectionCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertMessageForExceedingMaxSelectionCount;              //@synthesize alertMessageForExceedingMaxSelectionCount=_alertMessageForExceedingMaxSelectionCount - In the implementation block
-(id)initWithStyle:(long long)arg1 searchBarPlaceHolder:(id)arg2 searchBarA11yHint:(id)arg3 taggableCollections:(id)arg4 initialSelection:(id)arg5 forcedSelection:(id)arg6 disabledAvatars:(id)arg7 canTagSelf:(BOOL)arg8 shouldShowSearchField:(BOOL)arg9 sortDescriptors:(id)arg10 predicate:(id)arg11 flags:(unsigned long long)arg12 maxSelectionCount:(long long)arg13 alertTitleForExceedingMaxSelectionCount:(id)arg14 alertMessageForExceedingMaxSelectionCount:(id)arg15 ;
-(NSArray *)taggableCollections;
-(BOOL)canTagSelf;
-(NSString *)searchBarPlaceHolder;
-(NSString *)searchBarA11yHint;
-(NSArray *)forcedSelection;
-(NSArray *)disabledAvatars;
-(BOOL)shouldShowSearchField;
-(long long)maxSelectionCount;
-(NSString *)alertTitleForExceedingMaxSelectionCount;
-(NSString *)alertMessageForExceedingMaxSelectionCount;
-(long long)style;
-(NSPredicate *)predicate;
-(NSArray *)initialSelection;
-(NSArray *)sortDescriptors;
-(unsigned long long)flags;
@end

