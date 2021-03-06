/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSPredicate;

@interface FBAvatarPickerConfigurationBuilder : NSObject {

	long long _style;
	NSString* _searchBarPlaceHolder;
	NSString* _searchBarA11yHint;
	NSArray* _taggableCollections;
	NSArray* _initialSelection;
	NSArray* _forcedSelection;
	NSArray* _disabledAvatars;
	BOOL _canTagSelf;
	BOOL _shouldShowSearchField;
	NSArray* _sortDescriptors;
	NSPredicate* _predicate;
	unsigned long long _flags;
	long long _maxSelectionCount;
	NSString* _alertTitleForExceedingMaxSelectionCount;
	NSString* _alertMessageForExceedingMaxSelectionCount;

}
+(id)avatarPickerConfiguration;
+(id)avatarPickerConfigurationFromExistingAvatarPickerConfiguration:(id)arg1 ;
-(id)withStyle:(long long)arg1 ;
-(id)withSearchBarPlaceHolder:(id)arg1 ;
-(id)withSearchBarA11yHint:(id)arg1 ;
-(id)withTaggableCollections:(id)arg1 ;
-(id)withInitialSelection:(id)arg1 ;
-(id)withForcedSelection:(id)arg1 ;
-(id)withDisabledAvatars:(id)arg1 ;
-(id)withCanTagSelf:(BOOL)arg1 ;
-(id)withShouldShowSearchField:(BOOL)arg1 ;
-(id)withSortDescriptors:(id)arg1 ;
-(id)withPredicate:(id)arg1 ;
-(id)withFlags:(unsigned long long)arg1 ;
-(id)withMaxSelectionCount:(long long)arg1 ;
-(id)withAlertTitleForExceedingMaxSelectionCount:(id)arg1 ;
-(id)withAlertMessageForExceedingMaxSelectionCount:(id)arg1 ;
-(id)build;
@end

