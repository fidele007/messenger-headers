/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBFontRegisterDataSource;
#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, NSObject;

@interface FBFontRegister : NSObject {

	NSMutableDictionary* _fontRefCache;
	NSMutableDictionary* _handleCache;
	NSObject*<OS_dispatch_queue> _workingQueue;
	id<FBFontRegisterDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<FBFontRegisterDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)releaseHandle:(id)arg1 ;
-(void)fetchHandleForFontName:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_unregisterFontRef:(CGFontRef)arg1 ;
-(id)_acquireHandleWithFontName:(id)arg1 error:(id*)arg2 ;
-(void)_releaseCachedHandle:(id)arg1 ;
-(CGFontRef)_fontRefForFontName:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)setDataSource:(id<FBFontRegisterDataSource>)arg1 ;
-(void)dealloc;
-(id<FBFontRegisterDataSource>)dataSource;
@end

