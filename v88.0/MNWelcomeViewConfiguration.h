/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNWelcomeViewConfiguration : FBValueObject <NSCopying> {

	/*^block*/id _titleGenerator;
	/*^block*/id _subtitleGenerator;

}

@property (nonatomic,readonly) id titleGenerator;                 //@synthesize titleGenerator=_titleGenerator - In the implementation block
@property (nonatomic,readonly) id subtitleGenerator;              //@synthesize subtitleGenerator=_subtitleGenerator - In the implementation block
-(id)initWithTitleGenerator:(/*^block*/id)arg1 subtitleGenerator:(/*^block*/id)arg2 ;
-(id)titleGenerator;
-(id)subtitleGenerator;
@end
