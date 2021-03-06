/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBScrollingModel : NSObject {

	BOOL _animated;
	/*^block*/id _shouldScrollToModelBlock;
	unsigned long long _scrollPosition;

}

@property (nonatomic,copy,readonly) id shouldScrollToModelBlock;               //@synthesize shouldScrollToModelBlock=_shouldScrollToModelBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long scrollPosition;              //@synthesize scrollPosition=_scrollPosition - In the implementation block
@property (nonatomic,readonly) BOOL animated;                                  //@synthesize animated=_animated - In the implementation block
+(id)newWithShouldScrollToModelBlock:(/*^block*/id)arg1 scrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)initWithShouldScrollToModelBlock:(/*^block*/id)arg1 scrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)shouldScrollToModelBlock;
-(unsigned long long)scrollPosition;
-(BOOL)animated;
@end

