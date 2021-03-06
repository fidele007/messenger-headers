/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>

@protocol MNGroupsRoomSuggestionsStoreDelegate;
@class MNGroupsRoomSuggestionsStoreInjector, NSArray, NSString;

@interface MNGroupsRoomSuggestionsStore : NSObject <FBClassInjectable> {

	MNGroupsRoomSuggestionsStoreInjector* _injector;
	id<MNGroupsRoomSuggestionsStoreDelegate> _delegate;
	NSArray* _allRoomSuggestions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNGroupsRoomSuggestionsStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allRoomSuggestions;                                   //@synthesize allRoomSuggestions=_allRoomSuggestions - In the implementation block
+(Class)injectorClass;
-(id)_savedRoomSuggestionClientStatusFromUserSettings;
-(void)_saveRoomSuggestionsClientStatus:(id)arg1 ;
-(id)roomSuggestionsForClientStatus:(unsigned long long)arg1 ;
-(void)markAllUnreadRoomSuggestionsAsPendingRead;
-(void)markRoomSuggestionsAsViewed:(id)arg1 ;
-(void)addNewRoomSuggestion:(id)arg1 ;
-(void)updateStoreWithFetchedRoomSuggestions:(id)arg1 appendSuggestions:(BOOL)arg2 ;
-(void)markRoomSuggestionAsDismissed:(id)arg1 ;
-(NSArray *)allRoomSuggestions;
-(id)initWithInjector:(id)arg1 ;
-(void)setDelegate:(id<MNGroupsRoomSuggestionsStoreDelegate>)arg1 ;
-(id<MNGroupsRoomSuggestionsStoreDelegate>)delegate;
@end

