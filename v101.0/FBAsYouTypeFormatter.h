/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NBAsYouTypeFormatter;

@interface FBAsYouTypeFormatter : NSObject {

	NBAsYouTypeFormatter* _internalFormatter;

}

@property (nonatomic,retain) NBAsYouTypeFormatter * internalFormatter;              //@synthesize internalFormatter=_internalFormatter - In the implementation block
-(id)initWithRegionCode:(id)arg1 ;
-(id)formatInput:(id)arg1 ;
-(id)initWithRegionCode:(id)arg1 asYouTypeFormatter:(id)arg2 ;
-(void)setInternalFormatter:(NBAsYouTypeFormatter *)arg1 ;
-(NBAsYouTypeFormatter *)internalFormatter;
@end

