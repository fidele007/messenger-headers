/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, MNPaymentsPeerToPeerPaymentRequestBannerActionHandler, FBToast;

@interface _MNPaymentsToastRequestInfo : NSObject {

	NSOperationQueue* _fetchOperationQueue;
	MNPaymentsPeerToPeerPaymentRequestBannerActionHandler* _bannerActionHandler;
	FBToast* _toast;

}

@property (nonatomic,retain) NSOperationQueue * fetchOperationQueue;                                                   //@synthesize fetchOperationQueue=_fetchOperationQueue - In the implementation block
@property (nonatomic,retain) MNPaymentsPeerToPeerPaymentRequestBannerActionHandler * bannerActionHandler;              //@synthesize bannerActionHandler=_bannerActionHandler - In the implementation block
@property (nonatomic,retain) FBToast * toast;                                                                          //@synthesize toast=_toast - In the implementation block
-(NSOperationQueue *)fetchOperationQueue;
-(void)setFetchOperationQueue:(NSOperationQueue *)arg1 ;
-(MNPaymentsPeerToPeerPaymentRequestBannerActionHandler *)bannerActionHandler;
-(void)setBannerActionHandler:(MNPaymentsPeerToPeerPaymentRequestBannerActionHandler *)arg1 ;
-(FBToast *)toast;
-(void)setToast:(FBToast *)arg1 ;
@end
