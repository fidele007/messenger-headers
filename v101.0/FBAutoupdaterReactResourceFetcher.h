/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAutoupdaterReactService, FBAutoupdaterUpdate, NSLock;

@interface FBAutoupdaterReactResourceFetcher : NSObject {

	FBAutoupdaterReactService* _autoupdaterReactService;
	FBAutoupdaterUpdate* _lockedUpdate;
	NSLock* _lock;
	BOOL _isUpdateLocked;

}
-(id)URLForActiveResource:(id)arg1 ;
-(id)initWithAutoupdaterReactService:(id)arg1 ;
-(void)_activatedUpdate:(id)arg1 ;
-(id)activeUpdate;
-(id)activeUpdateVersion;
-(BOOL)verifyFilesizeForResourcePath:(id)arg1 update:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

