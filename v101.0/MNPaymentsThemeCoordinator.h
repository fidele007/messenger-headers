/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsDataEntityCoordinatorListener.h>

@class MNPaymentsDataEntityCoordinator, MNPaymentsThemeGraphQLDataFetcher, MNPaymentsThemeLocalImp, MNPaymentsThemeCoordinatorListenerAnnouncer, NSArray, FBImageDownloader, NSString;

@interface MNPaymentsThemeCoordinator : NSObject <MNPaymentsDataEntityCoordinatorListener> {

	MNPaymentsDataEntityCoordinator* _dataEntityCoordinator;
	MNPaymentsThemeGraphQLDataFetcher* _remoteDataFetcher;
	MNPaymentsThemeLocalImp* _localImp;
	MNPaymentsThemeCoordinatorListenerAnnouncer* _announcer;
	NSArray* _themeList;
	FBImageDownloader* _imageDownloader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFetchController:(id)arg1 imageDownloader:(id)arg2 ;
-(void)_prefetchThemeList;
-(void)_updateWithThemeList:(id)arg1 ;
-(void)didUpdateDataEntity:(id)arg1 ;
-(id)themeWithId:(id)arg1 ;
-(void)themeWithId:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)themeListWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
