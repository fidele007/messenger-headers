/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAddressBookContactListModelControllerDelegate.h>
#import <Messenger/MNSuggestedContactsRetriever.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNSuggestedContactsRetrieverDelegate;
@class MNAddressBookContactListModelController, FBLocalizedIndexedCollation, MNAddressBookContactSyncStore, NSString;

@interface MNInviteListAddressBookContactsRetriever : NSObject <MNAddressBookContactListModelControllerDelegate, MNSuggestedContactsRetriever, FBClassProvidable> {

	MNAddressBookContactListModelController* _addressBookContactListModelController;
	FBLocalizedIndexedCollation* _localizedIndexedCollation;
	MNAddressBookContactSyncStore* _addressBookContactSyncStore;
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
-(id)initWithAddressBookContactListModelController:(id)arg1 addressBookContactSyncStore:(id)arg2 ;
-(void)adressBookContactListModelController:(id)arg1 didLoadAddressBookContacts:(id)arg2 ;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end
