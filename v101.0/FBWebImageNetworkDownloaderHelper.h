/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebImageNetworkDownloaderHelperDelegate;
@class NSMutableDictionary, FBWebImageNetworkSpecifier;

@interface FBWebImageNetworkDownloaderHelper : NSObject {

	id<FBWebImageNetworkDownloaderHelperDelegate> _delegate;
	NSMutableDictionary* _downloads;
	FBWebImageNetworkSpecifier* _specifier;

}
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(void)_cancelDownloadsForNewSpecifier:(id)arg1 ;
-(id)_sortNodesByDescImageFlag:(id)arg1 ;
-(void)_cancelDownloadForNode:(id)arg1 ;
-(void)handleDownloadProgress:(double)arg1 forDownloadNode:(id)arg2 queue:(id)arg3 ;
-(void)handleDownloadResponse:(id)arg1 forDownloadNode:(id)arg2 specifier:(id)arg3 finished:(BOOL)arg4 queue:(id)arg5 ;
-(void)cancel;
-(id)initWithDelegate:(id)arg1 ;
@end
