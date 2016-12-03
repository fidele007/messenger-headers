/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetrieverDelegate.h>
#import <Messenger/MNSuggestedContactsRetriever.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNSuggestedContactsRetriever, MNSuggestedContactsRetrieverDelegate;
@class NSString;

@interface MNInviteListSelectableContactsRetriever : NSObject <MNSuggestedContactsRetrieverDelegate, MNSuggestedContactsRetriever, FBClassProvidable> {

	id<FBProvider> _inviteListContactsRetrieverProvider;
	id<FBProvider> _inviteListAddressBookContactsRetrieverProvider;
	id<FBProvider> _inviteListRemoteRankedContactsRetriever;
	id<FBProvider> _analyticsProvider;
	id<MNSuggestedContactsRetriever> _selectedSuggestedContactsRetriever;
	id<MNSuggestedContactsRetrieverDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSuggestedContactsRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(void)suggestedContactsRetriever:(id)arg1 didRetrieveSuggestedContactsInSections:(id)arg2 sectionTitles:(id)arg3 sectionIndexTitles:(id)arg4 preselectedContacts:(id)arg5 ;
-(void)suggestedContactsRetrieverDidStartLoading:(id)arg1 ;
-(void)suggestedContactsRetrieverDidFinishLoading:(id)arg1 ;
-(id)initWithInviteListContactsRetrieverProvider:(id)arg1 inviteListAddressBookContactsRetrieverProvider:(id)arg2 inviteListRemoteRankedContactsRetriever:(id)arg3 analyticsProvider:(id)arg4 ;
-(id)_suggestedContactsRetrieverWithInviteContactsType:(unsigned long long)arg1 ;
-(id)_remoteRankedContactsRetriever;
-(void)resetWithInviteListContactsRetrieverForInviteContactsType:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end

