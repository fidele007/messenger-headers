/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNWelcomeViewConfiguration : FBValueObject <NSCopying> {

	/*^block*/id _titleGenerator;
	/*^block*/id _subtitleGenerator;

}

@property (nonatomic,readonly) id titleGenerator;                 //@synthesize titleGenerator=_titleGenerator - In the implementation block
@property (nonatomic,readonly) id subtitleGenerator;              //@synthesize subtitleGenerator=_subtitleGenerator - In the implementation block
-(id)titleGenerator;
-(id)subtitleGenerator;
-(id)initWithTitleGenerator:(/*^block*/id)arg1 subtitleGenerator:(/*^block*/id)arg2 ;
@end

