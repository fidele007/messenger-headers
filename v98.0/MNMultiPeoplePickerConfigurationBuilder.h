/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNPeoplePickerConfiguration, NSString, NSArray, MNMultiPeoplePickerSuggestionsFilteringConfiguration;

@interface MNMultiPeoplePickerConfigurationBuilder : NSObject {

	MNPeoplePickerConfiguration* _peoplePickerConfiguration;
	BOOL _searchBarHidden;
	BOOL _bottomBarHidden;
	NSString* _sendButtonTitle;
	NSArray* _selectionSummaryBarExcludedContacts;
	BOOL _showSearchNavBarButton;
	MNMultiPeoplePickerSuggestionsFilteringConfiguration* _suggestionsFilteringConfiguration;
	NSArray* _peopleSuggestionsListeners;
	long long _callButtonsState;

}
+(id)multiPeoplePickerConfigurationFromExistingMultiPeoplePickerConfiguration:(id)arg1 ;
+(id)multiPeoplePickerConfiguration;
-(id)withPeoplePickerConfiguration:(id)arg1 ;
-(id)withSendButtonTitle:(id)arg1 ;
-(id)withSearchBarHidden:(BOOL)arg1 ;
-(id)withBottomBarHidden:(BOOL)arg1 ;
-(id)withSelectionSummaryBarExcludedContacts:(id)arg1 ;
-(id)withShowSearchNavBarButton:(BOOL)arg1 ;
-(id)withSuggestionsFilteringConfiguration:(id)arg1 ;
-(id)withPeopleSuggestionsListeners:(id)arg1 ;
-(id)withCallButtonsState:(long long)arg1 ;
-(id)build;
@end

