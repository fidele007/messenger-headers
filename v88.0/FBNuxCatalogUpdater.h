/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBNuxCatalog, FBUserSession, NSObject;

@interface FBNuxCatalogUpdater : NSObject {

	FBNuxCatalog* _nuxCatalog;
	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithSession:(id)arg1 nuxCatalog:(id)arg2 ;
-(void)updateNuxCatalogWithServerNuxes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processServerContextForNuxIDs:(id)arg1 withParams:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
