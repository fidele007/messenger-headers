/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPhotoEditingTabProperties : FBValueObject <NSCopying> {

	BOOL _isMutuallyExclusive;
	NSString* _imageName;
	NSString* _selectedImageName;
	NSString* _accessibilityLabel;
	NSString* _accessibilityIdentifier;

}

@property (nonatomic,copy,readonly) NSString * imageName;                            //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedImageName;                    //@synthesize selectedImageName=_selectedImageName - In the implementation block
@property (nonatomic,readonly) BOOL isMutuallyExclusive;                             //@synthesize isMutuallyExclusive=_isMutuallyExclusive - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityLabel;                   //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityIdentifier;              //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
-(NSString *)selectedImageName;
-(BOOL)isMutuallyExclusive;
-(id)initWithImageName:(id)arg1 selectedImageName:(id)arg2 isMutuallyExclusive:(BOOL)arg3 accessibilityLabel:(id)arg4 accessibilityIdentifier:(id)arg5 ;
-(NSString *)accessibilityIdentifier;
-(NSString *)accessibilityLabel;
-(NSString *)imageName;
@end

