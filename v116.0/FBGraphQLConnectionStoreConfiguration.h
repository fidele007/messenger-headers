/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBGraphQLConnectionStoreConfiguration : NSObject {

	NSString* _storeDescription;
	/*^block*/id _didInsertEdgesBlock;

}

@property (nonatomic,copy,readonly) NSString * storeDescription;              //@synthesize storeDescription=_storeDescription - In the implementation block
@property (nonatomic,readonly) id didInsertEdgesBlock;                        //@synthesize didInsertEdgesBlock=_didInsertEdgesBlock - In the implementation block
+(id)newWithStoreDescription:(id)arg1 ;
-(id)didInsertEdgesBlock;
-(NSString *)storeDescription;
-(id)initWithStoreDescription:(id)arg1 didInsertEdgesBlock:(/*^block*/id)arg2 ;
@end

