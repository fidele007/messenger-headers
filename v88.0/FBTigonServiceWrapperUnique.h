/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBTigonServiceWrapper.h>

@interface FBTigonServiceWrapperUnique : FBTigonServiceWrapper {

	unique_ptr<facebook::tigon::TigonService, std::__1::default_delete<facebook::tigon::TigonService> >* _service;

}
-(TigonService*)service;
-(id)initWithService:(unique_ptr<facebook::tigon::TigonService, std::__1::default_delete<facebook::tigon::TigonService> >*)arg1 ;
@end
