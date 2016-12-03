/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSectionComponent;

@interface FBSectionComponentStackInformation : NSObject {

	FBSectionComponent* _component;
	long long _sectionOffset;

}

@property (nonatomic,readonly) FBSectionComponent * component;              //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) long long sectionOffset;                     //@synthesize sectionOffset=_sectionOffset - In the implementation block
-(id)initWithComponent:(id)arg1 sectionOffset:(long long)arg2 ;
-(long long)sectionOffset;
-(FBSectionComponent *)component;
@end
