/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@interface FBProfilePictureRoundedCornerButtonComponent : CKCompositeComponent {

	CKTypedComponentAction<> _currentProfilePictureTapHandler;

}
+(id)newWithProfilePictureUri:(id)arg1 image:(id)arg2 profilePictureDimension:(unsigned long long)arg3 tapAction:(CKTypedComponentAction<>)arg4 backgroundColor:(id)arg5 session:(id)arg6 buttonAccessibilityLabel:(id)arg7 ;
-(void)didTapCurrentProfilePictureThumbnail;
@end

