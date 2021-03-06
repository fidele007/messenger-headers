/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNThreadRowsViewModel : FBValueObject <NSCopying> {

	BOOL _didReachEndOfThreadList;
	NSArray* _threadRows;

}

@property (nonatomic,copy,readonly) NSArray * threadRows;                 //@synthesize threadRows=_threadRows - In the implementation block
@property (nonatomic,readonly) BOOL didReachEndOfThreadList;              //@synthesize didReachEndOfThreadList=_didReachEndOfThreadList - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(NSArray *)threadRows;
-(id)initWithThreadRows:(id)arg1 didReachEndOfThreadList:(BOOL)arg2 ;
-(BOOL)didReachEndOfThreadList;
@end

