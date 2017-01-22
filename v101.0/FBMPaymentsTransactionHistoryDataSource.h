/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsHistoryDataRetrieverDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBMPaymentsTransactionHistoryDataSourceDelegate, MNPaymentsHistoryDataRetriever;
@class NSString, FBImageDownloader, FBGraphQLService, NSArray, FBPaymentsPeerToPeerContactsService, MNPaymentsExtensibleFlowMap, FBPaymentsPeerToPeerFeatureGatingController, MNCDNProfileImageDownloader;

@interface FBMPaymentsTransactionHistoryDataSource : NSObject <MNPaymentsHistoryDataRetrieverDelegate, UITableViewDataSource, UITableViewDelegate> {

	NSString* _currentUserFBID;
	FBImageDownloader* _imageDownloader;
	FBGraphQLService* _graphQLService;
	NSArray* _rowViewModels;
	NSString* _rowViewModelsProcessingUUID;
	FBPaymentsPeerToPeerContactsService* _contactsService;
	MNPaymentsExtensibleFlowMap* _extensibleMap;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	id<FBMPaymentsTransactionHistoryDataSourceDelegate> _delegate;
	id<MNPaymentsHistoryDataRetriever> _dataRetriever;

}

@property (assign,nonatomic,__weak) id<FBMPaymentsTransactionHistoryDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MNPaymentsHistoryDataRetriever> dataRetriever;                                 //@synthesize dataRetriever=_dataRetriever - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadMoreData:(BOOL)arg1 ;
-(void)_updateFooterRowViewModelWithError:(id)arg1 ;
-(void)_handleInsertedEdges:(id)arg1 ;
-(void)_setRowViewModels:(id)arg1 updatedSectionIndexes:(id)arg2 updatedIndexPaths:(id)arg3 deletedIndexPaths:(id)arg4 insertedIndexPaths:(id)arg5 ;
-(void)paymentsHistoryDataRetriever:(id)arg1 didInsertEdgesAtIndexes:(id)arg2 ;
-(void)paymentsHistoryDataRetriever:(id)arg1 didUpdateEdgesAtIndexes:(id)arg2 ;
-(void)paymentsHistoryDataRetriever:(id)arg1 didFailLoadingWithError:(id)arg2 ;
-(id)initWithCurrentUserFBID:(id)arg1 graphQLService:(id)arg2 imageDownloader:(id)arg3 contactsService:(id)arg4 extensibleMap:(id)arg5 featureGatingController:(id)arg6 profileImageDownloader:(id)arg7 ;
-(void)setDataRetriever:(id<MNPaymentsHistoryDataRetriever>)arg1 ;
-(id<MNPaymentsHistoryDataRetriever>)dataRetriever;
-(void)loadHeadIfNeeded;
-(void)setDelegate:(id<FBMPaymentsTransactionHistoryDataSourceDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBMPaymentsTransactionHistoryDataSourceDelegate>)delegate;
-(void)_cleanup;
@end
