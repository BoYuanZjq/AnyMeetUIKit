//
//  AMMeetInfoModel.h
//  AnyMeetUIKit
//
//  Created by derek on 2018/5/9.
//  Copyright © 2018年 derek. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Meetinginfo :NSObject
@property (nonatomic , copy) NSString              * meetingid;
@property (nonatomic , copy) NSString              * m_start_time;
@property (nonatomic , assign) BOOL                m_is_lock;
@property (nonatomic , assign) int                 m_quality;
@property (nonatomic , copy) NSString              * m_userid;
@property (nonatomic , copy) NSString              * m_password;
@property (nonatomic , copy) NSString              * m_avcodec;
@property (nonatomic , copy) NSString              * m_create_at;
@property (nonatomic , copy) NSString              * m_name;
@property (nonatomic , copy) NSString              * m_hls_url;
@property (nonatomic , assign) int                 m_limit_type;
@property (nonatomic , copy) NSString              * m_anyrtcid;
@property (nonatomic , copy) NSString              * m_push_url;
@property (nonatomic , copy) NSString              * m_host_name;
@property (nonatomic , assign) int                 m_line_quality;
@property (nonatomic , copy) NSString              * m_pull_url;
@property (nonatomic , assign) int                 m_type;

@end

@interface Memberlist :NSObject
@property (nonatomic , copy) NSString              * mem_anyrtc_openid;
@property (nonatomic , copy) NSString              * mem_userid;
@property (nonatomic , copy) NSString              * mem_icon;
@property (nonatomic , copy) NSString              * mem_nickname;

@end

@interface AMMeetInfoModel :NSObject
@property (nonatomic , assign) int                 code;
@property (nonatomic , copy) NSString              * message;
@property (nonatomic , strong) Meetinginfo              * meetinginfo;
@property (nonatomic , strong) NSArray<Memberlist *>              * memberlist;
@property (nonatomic , copy) NSString              * requestid;

@end
