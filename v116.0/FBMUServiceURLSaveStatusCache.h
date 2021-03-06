/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCache, FBMUServiceSession;

@interface FBMUServiceURLSaveStatusCache : NSObject {

	FBCache* _cache;
	FBMUServiceSession* _session;

}

@property (nonatomic,__weak,readonly) FBMUServiceSession * session;              //@synthesize session=_session - In the implementation block
-(id)initWithSession:(id)arg1 maxSize:(unsigned long long)arg2 ;
-(id)statusForURLOrStringArray:(id)arg1 ;
-(void)setStatuses:(id)arg1 forURLOrStringArray:(id)arg2 ;
-(unsigned long long)statusForURLOrString:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 forURLOrString:(id)arg2 ;
-(unsigned long long)count;
-(unsigned long long)maxSize;
-(FBMUServiceSession *)session;
@end

