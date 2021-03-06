/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface FBPlatformDebugGroup : NSObject {

	NSArray* _items;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
+(id)groupWithTitle:(id)arg1 items:(id)arg2 ;
-(id)initWithTitle:(id)arg1 items:(id)arg2 ;
-(NSString *)title;
-(NSArray *)items;
@end

