
#ifndef _HTTP_STATUS_H_
#define _HTTP_STATUS_H_

typedef enum HTTP_RESPONSE_CODE
{
  HTTP_STATUS_CONTINUE                        = 100,
  HTTP_STATUS_SWITCHING_PROTOCOLS             = 101,
  HTTP_STATUS_PROCESSING                      = 102,
  HTTP_STATUS_EARLY_HINTS                     = 103,

  HTTP_STATUS_OK                              = 200,
  HTTP_STATUS_CREATED                         = 201,
  HTTP_STATUS_ACCEPTED                        = 202,
  HTTP_STATUS_NON_AUTHORITAIVE_INFORMATION    = 203,
  HTTP_STATUS_NO_CONTENT                      = 204,
  HTTP_STATUS_RESET_CONTENT                   = 205,
  HTTP_STATUS_PARTIAL_CONTENT                 = 206,
  HTTP_STATUS_MULTI_STATUS                    = 207,
  HTTP_STATUS_ALREAD_REPORTED                 = 208,
  HTTP_STATUS_IM_USED                         = 226,

  HTTP_STATUS_MULTIPLE_CHOICES                = 300,
  HTTP_STATUS_MOVED_PERMANENTLY               = 301,
  HTTP_STATUS_FOUND                           = 302,
  HTTP_STATUS_SEE_OTHER                       = 303,
  HTTP_STATUS_NOT_MODIFIED                    = 304,
  HTTP_STATUS_USE_PROXY                       = 305,
  HTTP_STATUS_UNUSED                          = 306,
  HTTP_STATUS_TEMPORARY_REDIRECT              = 307,
  HTTP_STATUS_PERMANENT_REDIRECT              = 308,

  HTTP_STATUS_BAD_REQUEST                     = 400,
  HTTP_STATUS_UNAUTHORIZED                    = 401,
  HTTP_STATUS_PAYMENT_REQUIRED                = 402,
  HTTP_STATUS_FORBIDDEN                       = 403,
  HTTP_STATUS_NOT_FOUND                       = 404,
  HTTP_STATUS_METHOD_NOT_ALLOWED              = 405,
  HTTP_STATUS_NOT_ACCEPTABLE                  = 406,
  HTTP_STATUS_PROXY_AUTHENTICATION_REQUIRED   = 407,
  HTTP_STATUS_REQUEST_TIMEOUT                 = 408,
  HTTP_STATUS_CONFLICT                        = 409,
  HTTP_STATUS_GONE                            = 410,
  HTTP_STATUS_LENGTH_REQUIRED                 = 411,
  HTTP_STATUS_PRECONDITION_FAILED             = 412,
  HTTP_STATUS_PAYLOAD_TOO_LARGE               = 413,
  HTTP_STATUS_URI_TOO_LONG                    = 414,
  HTTP_STATUS_UNSUPPORTED_MEDIA_TYPE          = 415,
  HTTP_STATUS_RANGE_NOT_SATISFIABLE           = 416,
  HTTP_STATUS_EXPECTATION_FAILED              = 417,
  HTTP_STATUS_IM_A_TEAPOT                     = 418,
  HTTP_STATUS_MISDIRECTED_REQUEST             = 421,
  HTTP_STATUS_UNPROCESSABLE_ENTITY            = 422,
  HTTP_STATUS_LOCKED                          = 423,
  HTTP_STATUS_FAILED_DEPENDENCY               = 424,
  HTTP_STATUS_TOO_EARLY                       = 425,
  HTTP_STATUS_UPGRADE_REQUIRED                = 426,
  HTTP_STATUS_PRECONDITION_REQUIRED           = 428,
  HTTP_STATUS_TOO_MANY_REQUESTS               = 429,
  HTTP_STATUS_REQUEST_HEADER_FIELDS_TOO_LARGE = 431,
  HTTP_STATUS_UNAVAILABLE_FOR_LEGAL_REASONS   = 451,

  HTTP_STATUS_INTERNAL_SERVER_ERROR           = 500,
  HTTP_STATUS_NOT_IMPLEMENTED                 = 501,
  HTTP_STATUS_BAD_GATEWAY                     = 502,
  HTTP_STATUS_SERVICE_UNAVAILABLE             = 503,
  HTTP_STATUS_GATEWAY_TIMEOUT                 = 504,
  HTTP_STATUS_HTTP_VERSION_NOT_SUPPORTED      = 505,
  HTTP_STATUS_VARIANT_ALSO_NEGOTIATES         = 506,
  HTTP_STATUS_INSUFFICIENT_STORAGE            = 507,
  HTTP_STATUS_LOOP_DETECTED                   = 508,
  HTTP_STATUS_NOT_EXTENDED                    = 510,
  HTTP_STATUS_NETWORK_AUTHENTICATION_REQUIRED = 511,
} HTTP_RESPONSE_CODE;

static const char *HTTP_Status_Response(HTTP_RESPONSE_CODE status)
{
  switch (status)
  {
    /* 1xx INFORMATION */
    case HTTP_STATUS_CONTINUE:                        return "Continue";
    case HTTP_STATUS_SWITCHING_PROTOCOLS:             return "Switching Protocols";
    case HTTP_STATUS_PROCESSING:                      return "Processing";
    case HTTP_STATUS_EARLY_HINTS:                     return "Early Hints";

    /* 2xx SUCCESSFULLY */
    case HTTP_STATUS_OK:                              return "OK";
    case HTTP_STATUS_CREATED:                         return "Created";
    case HTTP_STATUS_ACCEPTED:                        return "Accepted";
    case HTTP_STATUS_NON_AUTHORITAIVE_INFORMATION:    return "Non-Authoritative Information";
    case HTTP_STATUS_NO_CONTENT:                      return "No Content";
    case HTTP_STATUS_RESET_CONTENT:                   return "Reset Content";
    case HTTP_STATUS_PARTIAL_CONTENT:                 return "Partial Content";
    case HTTP_STATUS_MULTI_STATUS:                    return "Multi-Status";
    case HTTP_STATUS_ALREAD_REPORTED:                 return "Alread Reported";
    case HTTP_STATUS_IM_USED:                         return "IM Used";

    /* 3xx REDIRECTION */
    case HTTP_STATUS_MULTIPLE_CHOICES:                return "Multiple Choices";
    case HTTP_STATUS_MOVED_PERMANENTLY:               return "Moved Permanently";
    case HTTP_STATUS_FOUND:                           return "Found";
    case HTTP_STATUS_SEE_OTHER:                       return "See Other";
    case HTTP_STATUS_NOT_MODIFIED:                    return "Not Modified";
    case HTTP_STATUS_USE_PROXY:                       return "Use Proxy";
    case HTTP_STATUS_UNUSED:                          return "Unused";
    case HTTP_STATUS_TEMPORARY_REDIRECT:              return "Temporary Redirect";
    case HTTP_STATUS_PERMANENT_REDIRECT:              return "Permanent Redirect";

    /* 4xx CLIENT ERROR */
    case HTTP_STATUS_BAD_REQUEST:                     return "Bad Request";
    case HTTP_STATUS_UNAUTHORIZED:                    return "Unauthorized";
    case HTTP_STATUS_PAYMENT_REQUIRED:                return "Payment Required";
    case HTTP_STATUS_FORBIDDEN:                       return "Forbidden";
    case HTTP_STATUS_NOT_FOUND:                       return "Not Found";
    case HTTP_STATUS_METHOD_NOT_ALLOWED:              return "Method Not Allowed";
    case HTTP_STATUS_NOT_ACCEPTABLE:                  return "Not Acceptable";
    case HTTP_STATUS_PROXY_AUTHENTICATION_REQUIRED:   return "Proxy Authentication Required";
    case HTTP_STATUS_REQUEST_TIMEOUT:                 return "Request Timeout";
    case HTTP_STATUS_CONFLICT:                        return "Conflict";
    case HTTP_STATUS_GONE:                            return "Gone";
    case HTTP_STATUS_LENGTH_REQUIRED:                 return "Length Required";
    case HTTP_STATUS_PRECONDITION_FAILED:             return "Precondition Failed";
    case HTTP_STATUS_PAYLOAD_TOO_LARGE:               return "Payload Too Large";
    case HTTP_STATUS_URI_TOO_LONG:                    return "URI Too Long";
    case HTTP_STATUS_UNSUPPORTED_MEDIA_TYPE:          return "Unsupported Media Type";
    case HTTP_STATUS_RANGE_NOT_SATISFIABLE:           return "Range Not Satisfiable";
    case HTTP_STATUS_EXPECTATION_FAILED:              return "Expectation Failed";
    case HTTP_STATUS_IM_A_TEAPOT:                     return "I'm a teapot";
    case HTTP_STATUS_MISDIRECTED_REQUEST:             return "Misdirected Request";
    case HTTP_STATUS_UNPROCESSABLE_ENTITY:            return "Unprocessable Entity";
    case HTTP_STATUS_LOCKED:                          return "Locked";
    case HTTP_STATUS_FAILED_DEPENDENCY:               return "Failed Dependency";
    case HTTP_STATUS_TOO_EARLY:                       return "Too Early";
    case HTTP_STATUS_UPGRADE_REQUIRED:                return "Upgrade Required";
    case HTTP_STATUS_PRECONDITION_REQUIRED:           return "Precondition Required";
    case HTTP_STATUS_TOO_MANY_REQUESTS:               return "Too Many Requests";
    case HTTP_STATUS_REQUEST_HEADER_FIELDS_TOO_LARGE: return "Request Header Fields Too Large";
    case HTTP_STATUS_UNAVAILABLE_FOR_LEGAL_REASONS:   return "Unavailable For Legal Reasons";

    /* 5xx SERVER ERROR */
    case HTTP_STATUS_INTERNAL_SERVER_ERROR:           return "Internal Server Error";
    case HTTP_STATUS_NOT_IMPLEMENTED:                 return "Not Implemented";
    case HTTP_STATUS_BAD_GATEWAY:                     return "Bad Gateway";
    case HTTP_STATUS_SERVICE_UNAVAILABLE:             return "Service Unavailble";
    case HTTP_STATUS_GATEWAY_TIMEOUT:                 return "Gateway Timeout";
    case HTTP_STATUS_HTTP_VERSION_NOT_SUPPORTED:      return "HTTP Version Not Supported";
    case HTTP_STATUS_VARIANT_ALSO_NEGOTIATES:         return "Variant Also Negotiates";
    case HTTP_STATUS_INSUFFICIENT_STORAGE:            return "Insufficient Storage";
    case HTTP_STATUS_LOOP_DETECTED:                   return "Loop Detected";
    case HTTP_STATUS_NOT_EXTENDED:                    return "Not Extended";
    case HTTP_STATUS_NETWORK_AUTHENTICATION_REQUIRED: return "Network Authentication Required";

    default: return ;
  }
}

#endif _HTTP_STATUS_H_
