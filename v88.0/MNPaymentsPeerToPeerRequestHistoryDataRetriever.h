/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsPeerToPeerPaymentRequestCoordinatorListener.h>
#import <Messenger/MNPaymentsHistoryDataRetriever.h>

@protocol MNPaymentsHistoryDataRetrieverDelegate;
@class FBGraphQLService, FBMemPageInfo, NSArray, MNPaymentsPeerToPeerPaymentRequestCoordinator, NSString;

@interface MNPaymentsPeerToPeerRequestHistoryDataRetriever : NSObject <MNPaymentsPeerToPeerPaymentRequestCoordinatorListener, MNPaymentsHistoryDataRetriever> {

	long long _directionType;
	FBGraphQLService* _graphQLSerivce;
	FBMemPageInfo* _currentPageInfo;
	NSArray* _currentEdges;
	id _lookupHandle;
	MNPaymentsPeerToPeerPaymentRequestCoordinator* _requestCoordinator;
	id<MNPaymentsHistoryDataRetrieverDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * analyticsTabName; 
@property (nonatomic,copy,readonly) NSString * contentForEmptyData; 
@property (nonatomic,readonly) BOOL hasMoreData; 
@property (getter=isLoadingData,nonatomic,readonly) BOOL loadingData; 
@property (nonatomic,copy,readonly) NSArray * loadedEdges; 
@property (assign,nonatomic,__weak) id<MNPaymentsHistoryDataRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)_handleMergedEdges:(id)arg1 withInsertionIndexes:(id)arg2 andPageInfo:(id)arg3 ;
-(void)didUpdatePaymentRequest:(id)arg1 ;
-(id)initWithRequestDirectionType:(long long)arg1 graphQLService:(id)arg2 requestCoordinator:(id)arg3 ;
-(NSString *)analyticsTabName;
-(NSArray *)loadedEdges;
-(BOOL)loadMoreDataWithLimit:(unsigned long long)arg1 ;
-(BOOL)isLoadingData;
-(NSString *)contentForEmptyData;
-(void)_handleDownloadedResponse:(id)arg1 existingEdges:(id)arg2 error:(id)arg3 ;
-(void)_updateRequest:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDelegate:(id<MNPaymentsHistoryDataRetrieverDelegate>)arg1 ;
-(id<MNPaymentsHistoryDataRetrieverDelegate>)delegate;
-(NSString *)title;
-(void)reset;
-(void)_handleError:(id)arg1 ;
-(BOOL)hasMoreData;
@end

